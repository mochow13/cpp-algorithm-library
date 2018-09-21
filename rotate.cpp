std::vector<int> collection={1,2,13,5,12,3,4};

// rotating to the left
// element at position 3 of the original collection is now the
// first element of the rotated collection
std::rotate(begin(collection), begin(collection)+3, end(collection));

// rotating to the right
// element at position 2 from the end (or at position 4) is now the
// last element of the rotated collection
std::rotate(rbegin(collection), rbegin(collection)+2, rend(collection));

// Note: in the above code, collection will be changed by both rotation