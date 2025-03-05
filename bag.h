#ifndef MAIN_BAG
#define MAIN_BAG
#include <cstdlib>
#include "node.h"

namespace MAIN_CS270 {
    class bag {
        public:
            bag();
            void insert(const double &entry);
            bool erase_one(const double &target);
            int size() const;
            int count (const double &target) const;
            node* search(const double &target) const;
        private:
            node* head_pointer;
            int number_nodes;
    };

}


#endif
