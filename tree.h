#ifndef _TREE_H
#define _TREE_H

#define INC_EXP 0.9
#define DEC_EXP 1.1

bool is_leaf(node_t *);
void change_split_ratio(node_t *, value_change_t);
node_t *first_extrema(node_t *);
node_t *second_extrema(node_t *);
node_t *find_fence(node_t *, direction_t);
node_t *find_neighbor(node_t *, direction_t);
void move_fence(node_t *, direction_t, fence_move_t);
void rotate_tree(node_t *, rotate_t);
void dump_tree(node_t *, char *, int);

#endif