#include<stdio.h>
#define V 7
#include<limits.h>

void addEdge(int graph[V][V] , int u , int v , int weight)
{
    graph[u-1][v-1] = weight;
    graph[v-1][u-1] = weight;
}

void printArray(int graph[V][V])
{
    for(int i = 0 ; i < V ; i++)
    {
        for(int j = 0 ; j < V ; j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
}

int minNumIndex(int graph[V] , int visited[])
{
    int min = INT_MAX , index = 0;
    for(int i = 0 ; i < V ; i++)
    {
        if(graph[i] != 0 && !visited[i] && graph[i] < min)
        {
            min = graph[i];
            index = i;
        }
    }
    return index;
}

void prims(int graph[V][V] , int src)
{
    int minCost = 0;
    int visited[V] = {0};
    visited[src] = 1;
    printf("%d -> ",src+1);
    for(int i = 0 ; i < V ; i++)
    {
        int vertex = minNumIndex(graph[src],visited);
        if(!visited[vertex])
        {
            printf("%d -> ",vertex+1);
            minCost += graph[src][vertex];
            visited[vertex] = 1;
            src = vertex;
        }
    }

    printf("\nMinimum cost is: %d",minCost);
}

int main()
{
    int graph[V][V] = {0};

    addEdge(graph,1,6,10);
    addEdge(graph,1,2,28);
    addEdge(graph,2,7,14);
    addEdge(graph,2,3,16);
    addEdge(graph,3,4,12);
    addEdge(graph,4,7,18);
    addEdge(graph,4,5,22);
    addEdge(graph,5,6,25);
    addEdge(graph,5,7,24);

    prims(graph,1-1);
}