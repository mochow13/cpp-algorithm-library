std::vector<int> collection={6,5,3,2,1,4,6,7};
std::vector<int> diffs;
std::adjacent_difference(begin(collection), end(collection), std::back_inserter(diffs));
// The first element of diffs will be same as the first element of collection