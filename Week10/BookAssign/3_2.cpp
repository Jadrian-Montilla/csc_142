#include <cstdio>
#include <iterator>
#include <iostream>

void write_to(char *ptr, std::size_t len, const int index, char input){
    if (index < 0 || index > len - 1)
    {
        std::cerr << "Invalid index at " << index << "\n";
    }
    else
    {
        ptr[index] = input;
    }
    
    
}

void read_from(const char *ptr, std::size_t len, const int index){
    if (index < 0 || index > len - 1)
    {
        std::cerr << "Invalid index at " << index << "\n";
    }
    else
    {
        std::cout << "ptr[" << index << "] = " << ptr[index] << "\n";
    }
    
    
}


int main(){
    char lower[] = "abc?e";
    auto lower_len = sizeof(lower);

    char upper[] = "ABC?E";
    char* upper_ptr = upper;
    auto upper_len = sizeof(upper);

    write_to(lower, lower_len, 3, 'd');
    read_from(lower, lower_len, 3);

    write_to(upper_ptr, upper_len, 3, 'D');
    read_from(upper_ptr, upper_len, 3);

    printf("lower: %s\nupper: %s", lower, upper);
}
