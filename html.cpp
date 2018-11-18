#include <stdio.h>
#include "html.h"

namespace snu {

	void make_html(char *name, DSResult *result) {
		FILE *fp = fopen(name, "w");


		fprintf(fp, "\
		<!DOCTYPE html>\
		<html>\
			<head>\
				<meta charset = \"utf-8\">\
				<title>SNU Graph Analysis Tool</title>\
				<style type=\"text/css\">\
					h2{\
						text-indent: 2em;\
					}\
				</style>\
			</head>\
			<body>\
				<center><h1><p>SNU Graph Analysis Tool</p></h1></center>\
				<h2>\
					(1) Graph information")

			// Graph information
			// fprintf(fp, "...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(2) Basic statistics");

			// Basic statistics
			//fprintf(fp, "...");


			fprintf(fp, "\
				</h2>\
				<h2>\
					(3) Count statistics");

			// Count Statistics
			//fprintf(fp,"...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(4) Statistics Image\
				</h2>\
				<h3>\
				<p> label-vertex image </p>\
				<img src=\"./matlab_plot/label-vertex.png\" width=\"400\" alt=\"label-vertex image\">\
				<img src=\"./matlab_plot/label-vertex_log.png\" width=\"400\" alt=\log scale label-vertex image\">\
				</h3>\
				<p> indegree image </p>\
				<img src=\"./matlab_plot/indegree.png\" width=\"400\" alt=\"indegree image\">\
				<img src=\"./matlab_plot/indegree_log.png\" width=\"400\" alt=\"log scale indegree image\">\
				</h3>\
				<h3>\
				<p> outdegree image </p>\
				<img src=\"./matlab_plot/outdegree.png\" width=\"400\" alt=\"outdegree image\">\
				<img src=\"./matlab_plot/outdegree_log.png\" width=\"400\" alt=\"log scale outdegree image\">
				</h3>\
			</body>\
		</html>\
		")

		fclose(fp);
	}

	void make_html(char *name, USResult *result) {
		FILE *fp = fopen(name, "w");
		fprintf(fp, "\
		<!DOCTYPE html>\
		<html>\
			<head>\
				<meta charset = \"utf-8\">\
				<title>SNU Graph Analysis Tool</title>\
				<style type=\"text/css\">\
					h2{\
						text-indent: 2em;\
					}\
				</style>\
			</head>\
			<body>\
				<center><h1><p>SNU Graph Analysis Tool</p></h1></center>\
				<h2>\
					(1) Graph information")

			// Graph information
			// fprintf(fp, "...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(2) Basic statistics");

			// Basic statistics
			//fprintf(fp, "...");


			fprintf(fp, "\
				</h2>\
				<h2>\
					(3) Count statistics");

			// Count Statistics
			//fprintf(fp,"...");

			fprintf(fp, "\
				</h2>\
				<h2>\
					(4) Statistics Image\
				</h2>\
				<h3>\
				<p> label-vertex image </p>\
				<img src=\"./matlab_plot/label-vertex.png\" width=\"400\" alt=\"label-vertex image\">\
				<img src=\"./matlab_plot/label-vertex_log.png\" width=\"400\" alt=\log scale label-vertex image\">\
				</h3>\
				<h3>\
				<p> degree image </p>\
				<img src=\"./matlab_plot/degree.png\" width=\"400\" alt=\"degree image\">\
				<img src=\"./matlab_plot/degree_log.png\" width=\"400\" alt=\"log scale degree image\">\
				</h3>\
			</body>\
		</html>\
		")
		fclose(fp);
	}
}
