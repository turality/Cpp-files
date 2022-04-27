#include <iostream>
#include <list>

using namespace std;


int main() {
    list<int> list;

    for (int i = 0; i < 10; i++){
        list.push_front(rand());
    }

    list.sort();

    cout << "elements sorted are: ";
    for (auto it = list.begin(); it != list.end(); it++){
        cout << *it << " ";
    }
    
    cout << endl << "first and last elements are: " << list.front() << " and " << list.back() << ", respectively." << endl;
    list.pop_front();
    cout << "Size of a list after deleting the first element is: " << list.size() << endl;


    return 0;
}