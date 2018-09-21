int a=9, b=12;
// out.first contains the minimum element, out.second is the maximum one
auto out=std::minmax(a,b);

std::vector<int> collection={6,5,3,2,1,4,6,7};
auto result=std::minmax_element(begin(collection), end(collection));
// you can also add compare function as the third argument
// (result.first - collection.begin()) is the index of the minimum element
// (result.second - collection.begin()) is the index of the maximum element