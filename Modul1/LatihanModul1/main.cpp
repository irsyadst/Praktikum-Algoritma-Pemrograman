    #include <iostream>

    using namespace std;

    string addem(string, string);
    string addem(string a, string b)
    {
    string c; c = a+b;
    return (c) ;
    }


    int main()
    {
        string x = "2211102048\n";
        string y = "MUHAMMAD IRSYAD";
        string z;
        z = addem(x,y);
        cout << z << endl;
        return 0;

    }
