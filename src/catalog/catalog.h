#ifndef CATALOG_H
#define CATALOG_H

#include "persons.h"
#include <vector>
#include <string>
#include <iostream>



class CyclistCatalog{

    private:
            std::vector <Cyclist> cyclists_;
    
    public:
            bool Load(const std::string& path);
            std::vector <Cyclist> Data() {return cyclists_;}
            std::size_t Size() {return Data().size();}
            std::string GetTeam (std::string cyclist_id);
            std::vector <Cyclist> GetByTeam(std::string team);
            std::vector <Cyclist> GetYoungest();
            void Add(Cyclist c);

};

ostream &operator<<(ostream &stream, const Punto &p){
        stream << "(";
}


class DirectorCatalog{

        private:
                std::vector <Director> directors_;
        
        public:
                bool Load(const std::string& path);
                std::vector <Director>& Data() {return directors_;}
                std::size_t Size() {return Data().size();}

};

#endif
