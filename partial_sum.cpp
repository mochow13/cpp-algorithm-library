std::vector<int> collection={6,5,3,2,1,4,6,7};
std::vector<int> sums, mults;

// contains the partial sum of collection in result
std::partial_sum(begin(collection), end(collection), std::back_inserter(sums));
// contains the partial product
std::partial_sum(begin(collection), end(collection), std::back_inserter(mults), std::multiplies<int>());
// you can also use your own binary operation