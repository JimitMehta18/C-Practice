#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    int age1,std1;
    string fn,ln;
    public:
    
    void set_age(int a)
    {
        age1 = a;
    }
    void set_standard(int b)
    {
        std1 = b;
    }
    void set_first_name(string c)
    {
        fn = c;
    }
    void set_last_name(string d)
    {
        ln = d;
    }
    int get_age()
    {
        return age1;
    }
     int get_standard()
    {
        return std1;
    }
    string get_first_name()
    {
       return fn;
    }
    string get_last_name()
    {
        return ln;
    }
    string to_string()
    {
        // string result = age1 + get_first_name() + get_last_name() + std1;;
        string result =std::to_string(age1) + ',' + get_first_name() + ',' + get_last_name() + ',' + std::to_string(std1);
        return result;
    }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n"; 
    cout << st.to_string();
    
    return 0;
}