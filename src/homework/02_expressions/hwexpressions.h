const double TAX_RATE = 0.0675;

double get_sales_tax_amount(double meal_amount);

double get_tip_amount(double meal_amount, double tip_rate);

void displayReceipt(double meal_amount, double tax_amount, double tip_amount, double total);