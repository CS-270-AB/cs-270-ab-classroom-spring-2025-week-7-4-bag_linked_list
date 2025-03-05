#ifndef MAIN_NODE_H
#define MAIN_NODE_H
#include <cstdlib>

namespace MAIN_CS270 {
    class node {
        public:
            node (const double data, node* next_node);
            void set_data(const double data);
            void set_link(node* next_node);
            double getData() const;
            node* getNextNode() const;
        private:
            double data;
            node* next_node;
    };
}

#endif