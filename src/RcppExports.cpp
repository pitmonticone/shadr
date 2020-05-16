// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// open_window_two
int open_window_two(const CharacterVector vertex_shader, const CharacterVector fragment_shader, int width, int height);
RcppExport SEXP _shadr_open_window_two(SEXP vertex_shaderSEXP, SEXP fragment_shaderSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector >::type vertex_shader(vertex_shaderSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type fragment_shader(fragment_shaderSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(open_window_two(vertex_shader, fragment_shader, width, height));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_shadr_open_window_two", (DL_FUNC) &_shadr_open_window_two, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_shadr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}