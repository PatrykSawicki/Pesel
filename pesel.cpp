#include <iostream>
#include <string>

int to_int(std::string peselstr)
{
    int size, bufor, sum{};
    std::string copy{};
    int tab[] = {1,3,7,9,1,3,7,9,1,3,1};

    size=peselstr.size();
    int *tab2 = new int[size];
    for(int i = 0 ; i < size ; i++)
    {
        copy = peselstr[i];
        tab2[i] = std::stoi(copy);
        bufor = (tab[i])*tab2[i] ;
        sum+=bufor;
        bufor=0;
    }
    delete [] tab2;
    return sum;
}

int main()
{
    int n,suma;
    std::string pesel;

    std::cin >> n;
    while(n)
    {
      std::cin>> pesel;
      suma = to_int(pesel);
      suma%10==0 && suma>0 ? std::cout<<"D"<<std::endl : std::cout<<"N" << std::endl;
      n--;
    }
    return 0;
}
