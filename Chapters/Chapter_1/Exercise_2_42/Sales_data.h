#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
class Sales_data
{
        public:
                Sales_data() : units_sold(0), revenue(0.0)
                {
                };
                ~Sales_data()
                {
                };
        private:
                std::string bookNo;
                unsigned units_sold;
                double revenue;
};
#endif
