std::vector<int> collection={1,2,13,5,12,3,4};

auto median_pos=collection.begin()+collection.size()/2;
std::nth_element(begin(collection),median_pos,end(collection));
// note that the original vector will be changed due to the operations
// done by nth_element