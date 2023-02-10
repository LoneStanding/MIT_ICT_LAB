#include <iostream>
using namespace std;
int vertices, edges;

int Mvertex(int a[][10], int visited[], int &counter)
{

}

int main()
{
    int a[10][10], n, m, x, counter = 0, i, j;
    cout << "Enter Number of Vertices : ";
    cin >> vertices;
    cout << "Enter Number of Edges : ";
    cin >> edges;
    for (i = 0; i < vertices; i++)
    for (int j = 0; j < vertices; j++)
        a[i][j] = 0;
    int p, q;
    for (i = 1; i <= edges; i++)                                            //Adjacency Matrix
    {
        cout << "Enter Source : ";
        cin >> p;
        cout << "Enter Destination : ";
        cin >> q;
        a[p - 1][q - 1] = 1;
    }
    cout << "\nThe Adjacency Matrix is : \n\n";
    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
        cout << a[i][j] << " ";
        }
    cout << endl;
    }
}
