#include "node.h"

namespace MAIN_CS270
{
   node::node(const double data, node* next_node) {
        this->data = data;
        this -> next_node = next_node;
   }

    void node::set_data(const double data){
         this->data = data;
    }
    
    void node::set_link(node* next_node){
        this -> next_node = next_node;
    }
    
    double node::getData() const {
        return this -> data;
    }
    
    node* node::getNextNode() const{
        return this -> next_node;
    }

}