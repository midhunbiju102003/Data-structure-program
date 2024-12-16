#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int u, v, weight;
} Edge;
typedef struct {
    int *parent;
    int *rank;
    int V;
} DisjointSet;

DisjointSet* createSet(int V) {
    DisjointSet *ds = (DisjointSet*)malloc(sizeof(DisjointSet));
    ds->parent = (int*)malloc(V * sizeof(int));
    ds->rank = (int*)malloc(V * sizeof(int));
    ds->V = V;
    
    for (int i = 0; i < V; i++) {
        ds->parent[i] = i; 
        ds->rank[i] = 0;     
    }
    
    return ds;
}

int find(DisjointSet *ds, int u) {
    if (ds->parent[u] != u) {
        ds->parent[u] = find(ds, ds->parent[u]); 
    }
    return ds->parent[u];
}

void unionSets(DisjointSet *ds, int u, int v) {
    int rootU = find(ds, u);
    int rootV = find(ds, v);

    if (rootU != rootV) {
        if (ds->rank[rootU] > ds->rank[rootV]) {
            ds->parent[rootV] = rootU;
        } else if (ds->rank[rootU] < ds->rank[rootV]) {
            ds->parent[rootU] = rootV;
        } else {
            ds->parent[rootV] = rootU;
            ds->rank[rootU]++;
        }
    }
}

int compare(const void *a, const void *b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}

void kruskal(int V, Edge edges[], int E) {
    DisjointSet *ds = createSet(V);

    qsort(edges, E, sizeof(Edge), compare);

    printf("Edges in the Minimum Spanning Tree (MST):\n");

    int mstWeight = 0;
    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int weight = edges[i].weight;

        if (find(ds, u) != find(ds, v)) {
            printf("%d - %d: %d\n", u, v, weight);
            mstWeight += weight;
            unionSets(ds, u, v);
        }
    }

    printf("Total weight of MST: %d\n", mstWeight);

    free(ds->parent);
    free(ds->rank);
    free(ds);
}

int main() {
    int V = 4;  
    int E = 5;  

    Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskal(V, edges, E);

    return 0;
}
