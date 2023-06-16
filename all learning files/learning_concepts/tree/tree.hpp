# if !defined(TREE_HPP)

#define TREE_HPP
# define main __host
# include <iostream>
# include <string>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>

struct s_tree {

    std::string     Folder;

    struct s_tree   *right;
    struct s_tree   *left;

    void (*Nothing)(short, bool);
};


typedef struct s_tree t_tree;

extern unsigned int NON_PR;
extern unsigned int NON_PS;
extern unsigned int NON_PL;
extern unsigned int NON_PM;


# endif