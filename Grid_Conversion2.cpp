#include "FEM_solution_manipulation.hpp"

int main()
{
	std::string input_filepath = "/lore/pessij/result_Grid_Test/";
	std::string input_filename = "500x500x500m";
	std::string output_filename = "500x500x500_grid2.csv";
	
	double grid_origin[] = {250,245,35};
	int num_parts = 4;
	int grid_dir[] = {1,1,1};
	int num_pts[] = {1,218,326};
	double grid_spacing[] = {0.046,0.046,0.046};
	
	create_grid_csv_temp_hist_file(input_filepath, input_filename, num_parts, output_filename, grid_origin, grid_dir, num_pts, grid_spacing);
}

