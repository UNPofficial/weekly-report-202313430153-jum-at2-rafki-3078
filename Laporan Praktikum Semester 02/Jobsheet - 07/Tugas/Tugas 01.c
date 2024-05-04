#include <stdio.h>
#include <stdlib.h>

// Define the maximum number of vertices in the graph
#define MAX_VERTICES 100

// Define the queue structure
typedef struct {
    int items[MAX_VERTICES];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initializeQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
int isQueueEmpty(Queue* q) {
    return q->front == -1 && q->rear == -1;
}

// Add an item to the queue
void enqueue(Queue* q, int vertex) {
    if (q->rear == MAX_VERTICES - 1)
        printf("\nQueue is Full!!");
    else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = vertex;
    }
}

// Remove an item from the queue
int dequeue(Queue* q) {
    int item;
    if (isQueueEmpty(q)) {
        printf("\nQueue is empty");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            printf("\nResetting queue ");
            initializeQueue(q);
        }
    }
    return item;
}

// Define the graph structure
typedef struct {
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
} Graph;

// Initialize the graph
void initializeGraph(Graph* g, int numVertices) {
    g->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            g->adjacencyMatrix[i][j] = 0;
        }
    }
}

// Add an edge to the graph
void addEdge(Graph* g, int startVertex, int endVertex) {
    g->adjacencyMatrix[startVertex][endVertex] = 1;
    g->adjacencyMatrix[endVertex][startVertex] = 1;
}

// Perform BFS on the graph
void BFS(Graph* g, int startVertex) {
    int visited[MAX_VERTICES];
    Queue q;

    initializeQueue(&q);
    for (int i = 0; i < g->numVertices; i++) {
        visited[i] = 0;
    }

    visited[startVertex] = 1;
    enqueue(&q, startVertex);

    while (!isQueueEmpty(&q)) {
        int currentVertex = dequeue(&q);
        printf("%d ", currentVertex);

        for (int i = 0; i < g->numVertices; i++) {
            if (g->adjacencyMatrix[currentVertex][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                enqueue(&q, i);
            }
        }
    }
}

int main() {
    Graph g;
    int numVertices = 5;

    initializeGraph(&g, numVertices);

    addEdge(&g, 0, 1);
    addEdge(&g, 0, 4);
    addEdge(&g, 1, 2);
    addEdge(&g, 1, 4);
    addEdge(&g, 2, 3);
    addEdge(&g, 3, 4);

    printf("BFS traversal: ");
    BFS(&g, 0);

    return 0;
}