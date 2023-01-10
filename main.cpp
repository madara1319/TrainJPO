#include <iostream>
#include <array>
#include <vector>
#include <iterator>
#include <algorithm>



using std::cout, std::endl, std::cin, std::vector;
using std::ostream_iterator;
using std::random_shuffle;

typedef vector< vector<int> > Matrix;
typedef vector<int> Row;

//void* maxMatrix( vector< vector<int> > matrix )
//{
//for(auto i: matrix)
//        for(auto j: matrix[])
//            cout<<matrix[i][j];
//
//}

int main() {
    int data, matrixSize;
    int decision{};
    int value{};
    int chosenVec_number{};
   cout << "Podaj rozmiar tablicy " << endl;
   cin >> matrixSize;
    Matrix matrix;
    Row row;


    cout << "Witaj w programie podaj opcje " << endl;


    vector<int> v1{100, 200, 300, 400, 500, 600, 700, 800, 900};


    cout << endl;
    while (decision != 10) {
        cout << "choose option " << endl;
        cin >> decision;
        switch (decision) {
            case 1:
            {
                Row temp;
                int numElements{};
                int valueElement{};
                if (matrix.size() != matrixSize) {
                    cout << "enter how many numbers u wanna add " << endl;
                    cin >> numElements;
                    for (int i{}; i < numElements; i++) {
                        cin >> valueElement;
                        temp.push_back(valueElement);
                    }
                    matrix.push_back(temp);
                    temp.clear();
                    break;
                } else
                    cout << "Sorry matrix is already full " << endl;
                break;
            }

            case 2: {
                if(matrix.size()==0)
                {
                    cout<<"Matrix is empty now "<<endl;
                }
                cout<<"Which vector of matrix u wanna display? "<<endl;
                cin>>chosenVec_number;
                if(chosenVec_number>matrix.size()-1)
                {
                    cout<<"Index out of range "<<endl;
                }
                else
                {
                copy(matrix[chosenVec_number].begin(), matrix[chosenVec_number].end(), ostream_iterator<int>(cout, " "));
                }
                cout<<endl;
                break;
            }
            case 3: {
                cout<<"Which vector u wanna display back to front "<<endl;
                cin>>chosenVec_number;
                vector<int> temp{};
                if(chosenVec_number>matrix.size()-1)
                {
                    cout<<"Index out of range "<<endl;
                }
                else {
                    for (int i = 0; i < matrix[chosenVec_number].size(); i++)
                        temp.push_back(matrix[chosenVec_number][i]);
                    reverse(temp.begin(), temp.end());
                    copy(temp.begin(), temp.end(), ostream_iterator<int>(cout, " "));
                    cout << "\n";
                    break;
                }
            }
            case 4: {
                cout << "Which vector u wanna display back to front " << endl;
                cin >> chosenVec_number;
                vector<int> temp{};
                if (chosenVec_number > matrix.size() - 1) {
                    cout << "Index out of range " << endl;
                } else {
                    for (int j = 0; j < matrix[chosenVec_number].size(); j++)
                        temp.push_back(matrix[chosenVec_number][j]);
                    random_shuffle(temp.begin(), temp.end(), [&](int i) { return std::rand() % i; });
                    copy(temp.begin(), temp.end(), ostream_iterator<int>(cout, " "));
                    cout << "\n";
                    break;
                }
            }
            case 5: {
                //bubblesort
                break;
            }
            case 6: {
                //max
                break;
            }
            case 7: {
                //min
                break;
                // copy(matrix.begin(), matrix.end(), ostream_iterator<int>(cout, " "));
                // cout << "\n";
                // for (int k{}; k < size; k++) {
                //    for (int l{}; l < size; l++) {
                //       cout << matrix[k][l] << " ";
                //  }
                // cout<<endl;
            }

            case 8: {

            }
            case 9: {
                    for(int i{}; i<matrix.size(); i++)
                    {
                        for(int j{}; j <matrix[i].size(); j++)
                            cout<<matrix[i][j]<<" ";
                        cout<<endl;
                    }

                break;
            }
            default:
                decision = 10;
                break;
        }

    }

}
