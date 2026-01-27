#include<stdio.h>
#include<limits.h>

int indexOfMinDist(int visited[] , int dist[] , int vertexCount)
{
    int min = INT_MAX , minIndex;
    for(int i = 0 ; i < vertexCount ; i++)
    {
        if(visited[i] == 0 && dist[i] <= min)
        {
            min = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

void dijkstra(int vertexCount, int graph[vertexCount][vertexCount] , int src)
{
    int dist[vertexCount];
    int visited[vertexCount];

    for(int i = 0 ; i < vertexCount ; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[src] = 0;

    for(int i = 0 ; i < vertexCount-1 ; i++)
    {
        int minVertex = indexOfMinDist(visited,dist,vertexCount);

        visited[minVertex] = 1;

        for(int j = 0 ; j < vertexCount ; j++)
        {
            if(visited[j] == 0 && graph[minVertex][j] != 0 && dist[j] > dist[minVertex] + graph[minVertex][j])
            {
                dist[j] = dist[minVertex] + graph[minVertex][j];
            }
        }
    }

    for(int i = 0 ; i < vertexCount ; i++)
    {
        printf("Distance of %d from %d is %d\n", i+1,src+1,dist[i]);
    }
}

int main()
{
    int vertexCount;
    int edgeCount;
    int a,b,weight;
    printf("Enter number of vertices: ");
    scanf("%d",&vertexCount);
    printf("Enter number of edges: ");
    scanf("%d",&edgeCount);

    int graph[vertexCount][vertexCount];

    for(int i = 0 ; i < vertexCount ; i++)
    {
        for(int j = 0 ; j < vertexCount ; j++) graph[i][j] = 0;
    }

    for(int i = 0 ; i < edgeCount ; i++)
    {
        printf("Enter vertice pair and it's weight: ");
        scanf("%d %d %d",&a,&b,&weight);
        graph[a-1][b-1] = weight;
    }

    int src;
    printf("Enter source vertex: ");
    scanf("%d",&src);

    dijkstra(vertexCount,graph,src-1);
}