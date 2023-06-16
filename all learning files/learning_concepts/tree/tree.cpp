# include "tree.hpp"


t_tree* new_node(const std::string &Folder, void (*func)(short, bool)) 
{
    t_tree* node;
    
    try {
        node = (t_tree *)valloc(sizeof(t_tree));
        !node ? throw std::bad_alloc() : 0;
    }
    catch (std::bad_alloc &e) {
        std::cout << strerror(ENOMEM) << e.what() << std::endl; 
    }
    (*node).left = (*node).right = nullptr;
    return (*node).Nothing = func, node;
}

void print_tree(t_tree *root, short levl) {
    if (!)
}


int32_t __hos(int argc, char **argv, char **envp) {




    exit(-1);
}