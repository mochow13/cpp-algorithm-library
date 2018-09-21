// sorted collection
std::vector<int> collection={1,2,5,5,5,6,9,12};

// we are looking for a range where all elements equal to 5
auto range = std::equal_range(begin(collection), end(collection), 5);
// the required range 
std::cout<<(range.first-begin(collection))<<" "<<(range.second-begin(collection))<<std::endl;