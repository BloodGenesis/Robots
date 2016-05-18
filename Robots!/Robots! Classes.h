#ifndef robots_classes_h
#define robots_classes_h
class Stats
{
public:
	Stats();
	Stats(int level, double stat_type[12], int total_xp, int needed_xp, int bot_type);
private:
	double stat_array[12] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
};
class Etna;
{
public:
	Etna();
	Etna_stats();
private:
	Stats stats;

};
#endif
