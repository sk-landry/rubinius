require File.dirname(__FILE__) + '/../../spec_helper'
require File.dirname(__FILE__) + '/fixtures/classes'

describe "Array#insert" do
  it "inserts objects before the element at index for non-negative index" do
    ary = []
    ary.insert(0, 3).equal?(ary).should == true
    ary.should == [3]

    ary.insert(0, 1, 2).equal?(ary).should == true
    ary.should == [1, 2, 3]
    ary.insert(0)
    ary.should == [1, 2, 3]
    
    # Let's just assume insert() always modifies the array from now on.
    ary.insert(1, 'a').should == [1, 'a', 2, 3]
    ary.insert(0, 'b').should == ['b', 1, 'a', 2, 3]
    ary.insert(5, 'c').should == ['b', 1, 'a', 2, 3, 'c']
    ary.insert(7, 'd').should == ['b', 1, 'a', 2, 3, 'c', nil, 'd']
    ary.insert(10, 5, 4).should == ['b', 1, 'a', 2, 3, 'c', nil, 'd', nil, nil, 5, 4]
  end

  it "appends objects to the end of the array for index == -1" do
    [1, 3, 3].insert(-1, 2, 'x', 0.5).should == [1, 3, 3, 2, 'x', 0.5]
  end

  it "inserts objects after the element at index with negative index" do
    ary = []
    ary.insert(-1, 3).should == [3]
    ary.insert(-2, 2).should == [2, 3]
    ary.insert(-3, 1).should == [1, 2, 3]
    ary.insert(-2, -3).should == [1, 2, -3, 3]
    ary.insert(-1, []).should == [1, 2, -3, 3, []]
    ary.insert(-2, 'x', 'y').should == [1, 2, -3, 3, 'x', 'y', []]
    ary = [1, 2, 3]
  end

  it "pads with nils if the index to be inserted to is past the end" do
    [].insert(5, 5).should == [nil, nil, nil, nil, nil, 5]
  end

  it "can insert before the first element with a negative index" do
    [1, 2, 3].insert(-4, -3).should == [-3, 1, 2, 3]
  end  
  
  it "raises IndexError if the negative index is out of bounds" do
    should_raise(IndexError) { [].insert(-2, 1) }
    should_raise(IndexError) { [1].insert(-3, 2) }
  end

  it "does nothing of no object is passed" do
    [].insert(0).should == []
    [].insert(-1).should == []
    [].insert(10).should == []
    [].insert(-2).should == []
  end

  it "calls to_int on position argument" do
    obj = Object.new
    def obj.to_int() 2 end
    [].insert(obj, 'x').should == [nil, nil, 'x']
    
    obj = Object.new
    obj.should_receive(:respond_to?, :with => [:to_int], :returning => true)
    obj.should_receive(:method_missing, :with => [:to_int], :returning => 2)
    [].insert(obj, 'x').should == [nil, nil, 'x']
  end
  
compliant :r18 do
  it "raises TypeError on frozen arrays if modification takes place" do
    should_raise(TypeError) { @frozen_array.insert(0, 'x') }
  end

  it "does not raise on frozen arrays if no modification takes place" do
    @frozen_array.insert(0) # ok
  end
end

noncompliant :rubinius do
  it "always raises TypeError on frozen arrays" do
    should_raise(TypeError) { @frozen_array.insert(0) } 
    should_raise(TypeError) { @frozen_array.insert(0, 'x') }
  end
end
end
