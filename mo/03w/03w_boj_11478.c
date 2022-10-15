#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int result;

struct Node {
    int key;
    char value[1002];
    struct Node *next;
};

struct Bucket {
    struct Node *head;
    int count;
};

struct Bucket hash_table[1000004];
int sum;

int hash_function(int key) {
    if (key < 0)
        return -(key % 1000003);
    return key % 1000003;
}

struct Node *create_node(int key, char *value) {
    struct Node * new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->key = key;
    strcpy(new->value, value);
    return new;
}

void add_hash(int key, char *value) {
    int hash_index = hash_function(key);
    struct Node * new;
    if (hash_table[hash_index].count == 0) {
        new = create_node(key, value);
        hash_table[hash_index].head = new;
        hash_table[hash_index].count++;
        result++;
    }
    else {
        new = hash_table[hash_index].head;
        while (new != NULL) {
            if (strcmp(new->value, value) == 0)
                return;
            new = new->next;
        }
        new = create_node(key, value);
        new->next = hash_table[hash_index].head;
        hash_table[hash_index].head = new;
        hash_table[hash_index].count++;
        result++;
    }
    return ;
}

char str[1002];
char temp[1002];

int main() {
    scanf("%s", str);
    int len = strlen(str);
    int size = 0;

    for (int i = 0; i < len; ++i) {
        sum = 1;
        size = 0;
        for (int j = i; j < len; ++j) {
            sum = (31 * sum) + str[j];
            temp[size] = str[j];
            temp[size + 1] = '\0';
            size++;
            add_hash(sum, temp);
        }
    }
    printf("%d", result);
    return 0;

}
