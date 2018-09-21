std::vector<int> fibs(10,1);
std::adjacent_difference(begin(fibs),end(fibs)-1,begin(fibs)+1,std::plus<>{});