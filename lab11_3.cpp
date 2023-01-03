#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include<fstream>

using namespace std;

int main(){
    float count = 0;
    float sum = 0, standard = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
      sum += atof(textline.c_str());
      standard += pow(atof(textline.c_str()),2);
      count++;
    }
    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << sum/count << '\n';
    cout << "Standard deviation = " << sqrt((standard/count)-(pow(sum/count,2)));
    source.close();
}