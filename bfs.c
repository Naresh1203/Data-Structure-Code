#define initial 1 
#define waiting 2 
#define visited 3 
#define max 10 
int nv; 
int arr[max][max] = {0}; 
int state[max] = {0}; 
int queue[max],rear=-1,front=-1; 
void creategraph() 
{ 
    printf("Enter total no of nodes : "); 
    scanf("%d",&nv); 
    int i,j; 
    for(i = 0; i < nv; i++) 
    {   
        for(j = 0; j < nv; j++) 
        { 
            printf("Enter edge [%d-%d] : ",i,j); 
            scanf("%d",&arr[i][j]); 
        } 
        
    } 
} 
void display() 
{ 
    int i,j; 
    for(i=0;i<nv;i++) 
    { 
        for(j=0;j<nv;j++) 
        { 
            printf("%d\t",arr[i][j]); 
        } 
        printf("\n"); 
    } 
} 
int is_empty() 
{ 
    if(front == -1 || front > rear) 
    { 
        return 1; 
    } 
    else 
    { 
        return 0; 
    } 
} 
int is_full() 
{ 
    if(rear == max -1) 
    { 
        return 1; 
    } 
    else 
    { 
        return 0; 
    } 
} 
void insert(int data) 
{ 
    if(!is_full()) 
    { 
        if(front == -1) 
        front = 0; 
        queue[++rear] = data; 
    } 
} 
int delete() 
{ 
    if(!is_empty()) 
    { 
        return queue[front++]; 
    } 
} 
void bfs(int v) 
{ 
    int i; 
    insert(v); 
    printf("\nBFS Sequence : \n"); 
    while(!is_empty()) 
    { 
        v = delete(); 
        printf("%d ",v); 
        state[v] = visited; 
        for(i = 0; i < nv; i++) 
        { 
            if(arr[v][i] == 1 && state[i] == initial) 
            { 
                insert(i); 
                state[i] = waiting; 
            } 
         } 
    } 
} 
void bfs_traversal() 
{ 
    int i; 
    for(i = 0; i < nv; i++) 
    { 
        state[i] = initial; 
    } 
    printf("Enter starting vertex : "); 
    scanf("%d",&i); 
    bfs(i); 
} 
int main() 
{ 
    creategraph(); 
    display(); 
    bfs_traversal(); 
    return 0; 
    
} 