std::vector<int> c1={1,2,5,5,5,6,9,12};
std::vector<int> c2={2,4,4,5,7,15};

std::vector<int> result; // contains merged elements
std::merge(begin(c1), end(c1), begin(c2), end(c2), std::back_inserter(result));

// result = {1, 2, 2, 4, 4, 5, 5, 5, 5, 6, 7, 9, 12, 15}