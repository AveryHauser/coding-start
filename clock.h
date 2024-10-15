 
 class Clock
 {
 private:
   int hour;
   int minute;
   int second;
 public:
   Clock();
   ~Clock();
   void tick();
   void sync();
   int get_seconds();
   int get_minutes();
   int get_hours();
   void set_seconds(int s);
   void set_minutes(int m);
   void set_hours(int h);
   void display();
 };


