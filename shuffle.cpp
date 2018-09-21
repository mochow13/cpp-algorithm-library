std::vector<int> collection={1,2,13,5,12,3,4};

std::random_device rd;
std::mt19937 rand_gen(rd());
std::shuffle(begin(collection), end(collection), rand_gen);