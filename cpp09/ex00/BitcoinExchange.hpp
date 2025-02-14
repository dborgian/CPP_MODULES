#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <time.h>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>


class BitcoinExchange{

        private:
            std::map<std::string, float> _database;
        public:
        BitcoinExchange() {}
        ~BitcoinExchange() {}
        BitcoinExchange(const BitcoinExchange& other) : _database(other._database) {}
        class NoDataFound: public std::exception {
            public:
                const char *what(void) const throw()
                {
                    return ("Date not found");
                }
        };
        BitcoinExchange& operator=(const BitcoinExchange& other) 
        {
            if (this != &other) {
                _database = other._database;
            }
            return *this;
        }
        float getRate(std::string &date)
        {
            std::map<std::string, float>::iterator it = _database.find(date);
            if(it != _database.end())
                return it->second;
            else 
                throw NoDataFound();
        }
        bool loadRates(std::string &file_path) 
        {
            std::ifstream file(file_path);
            if (!file.is_open()) 
            {
                std::cerr << "Error: could not open file " << file_path<< std::endl;
                return false;
            }

            std::string line;
            while (std::getline(file, line)) 
            {
                std::istringstream iss(line);
                std::string date_str;
                std::string rate_str;
                if (std::getline(iss, date_str, ',') && std::getline(iss, rate_str)) {
                    try {
                        float rate = std::stof(rate_str);
                        _database[date_str] = rate;
                        std::cout << "Tasso di cambio per la data " << date_str << " è: " << rate << std::endl;

                    } catch (const std::exception& e) {
                        std::cerr << "Error: invalid exchange rate data." << std::endl;
                        continue;
                    }
                }      
            }
            //printDatabase();
            file.close();
            return true;
}
        void printDatabase() const {
        std::cout << "Contenuto del database:" << std::endl;
        for (const auto& pair : _database) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }


};









#endif