#include <iostream>
#include "functions_to_implement.cpp"

int main(){

    std::cout << "Our vector is {2,2,3,3}" << std::endl;

    //Sum function
    std::vector<int> vect1 = {2,2,3,3};
    std::cout << "Sum of vector:" << Sum(vect1) << std::endl;

    //Product function
    std::cout << "Product of vector: " << Product(vect1) << std::endl;

    // std::cout << "Let's add 2 to our vector: ";
    // std::vector<int> resultVector = VectorPlusN(vect1,2);

    // for(unsigned int i = 0; i < resultVector.size(); i++) {
    //     std::cout << resultVector[i] <<  " ";
    // }
}