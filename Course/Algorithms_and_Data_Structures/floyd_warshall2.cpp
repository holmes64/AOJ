
#include <vector>
#include <iostream>
#define V 6
#define INF 7777

using namespace std;

int dist[V][V];
int Pre[V][V];

void printSolution();
void printPre();

void floydWarshell(int graph[V][V]){
    int i, j, k;
    for(i = 0; i < V; i++){
        for(j = 0; j < V; j++){
            dist[i][j] = graph[i][j];
            Pre[i][j] = graph[i][j];
        }
    }
    
    for (k = 0; k < V; k++){
        cout << k+1 << endl;
        //printPre();
        //printSolution();
        for(i = 0; i < V; i++){
            for(j = 0; j < V; j++){
                int num;
                if(Pre[i][k] == INF || Pre[k][j] == INF){
                    num = INF;
                }else{
                    num = Pre[i][k] + Pre[k][j];
                }

                if (num < Pre[i][j]){
                    dist[i][j] = num;
                }else{
                    dist[i][j] = Pre[i][j];
                }
            }
        }
        for(i = 0; i < V; i++){
            for(j = 0; j < V; j++){
                Pre[i][j] = dist[i][j];
            }
        }
        printSolution();
    }
}

void printSolution(){
    printf ("D\n");
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if (dist[i][j] == INF){
                printf("%7s", "INF");
            }else{
                printf ("%7d", dist[i][j]);
            }
        }
        printf("\n");
    }
}

void printPre(){
    printf("PreD \n");
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if (Pre[i][j] == INF){
                printf("%7s", "INF");
            }else{
                printf ("%7d", Pre[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int graph[V][V] = {
    /*
      {0,   3,  8, INF, -4},
        {INF, 0, INF,  1, 7},
        {INF, 4, 0,   INF,INF},
        {2, INF, -5, 0, INF},
        {INF, INF, INF, 6, 0} 
        */
    /*    {0, INF,  INF, INF,  -1, INF},
        {1,     0,  INF,   2, INF, INF},
        {INF,   2,    0, INF, INF, -8},
        {-4,  INF,  INF,   0,   3, INF},
        {INF,   7,  INF, INF,   0, INF},
        {INF,   5,   10, INF, INF,   0}*/

        {0, INF, INF, INF, -1, INF},
        {1, 0, INF, 2, INF, INF},
        {INF, 2, 0, INF, INF, -8},
        {-4, INF, INF, 0, 3, INF},
        {INF, 7, INF, INF, 0, INF},
        {INF, 5, 10, INF, INF, 0}


    };

    floydWarshell(graph);
    return 0;
}