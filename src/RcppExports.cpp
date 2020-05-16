// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// open_window_rcpp
int open_window_rcpp(const CharacterVector vertex_shader, const CharacterVector fragment_shader, int width, int height, int type);
RcppExport SEXP _shadr_open_window_rcpp(SEXP vertex_shaderSEXP, SEXP fragment_shaderSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector >::type vertex_shader(vertex_shaderSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type fragment_shader(fragment_shaderSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(open_window_rcpp(vertex_shader, fragment_shader, width, height, type));
    return rcpp_result_gen;
END_RCPP
}
// open_window_image_rcpp
int open_window_image_rcpp(const CharacterVector vertex_shader, const CharacterVector fragment_shader, int width, int height, NumericMatrix& r_layer, NumericMatrix& g_layer, NumericMatrix& b_layer);
RcppExport SEXP _shadr_open_window_image_rcpp(SEXP vertex_shaderSEXP, SEXP fragment_shaderSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP r_layerSEXP, SEXP g_layerSEXP, SEXP b_layerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector >::type vertex_shader(vertex_shaderSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type fragment_shader(fragment_shaderSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type r_layer(r_layerSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type g_layer(g_layerSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type b_layer(b_layerSEXP);
    rcpp_result_gen = Rcpp::wrap(open_window_image_rcpp(vertex_shader, fragment_shader, width, height, r_layer, g_layer, b_layer));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_shadr_open_window_rcpp", (DL_FUNC) &_shadr_open_window_rcpp, 5},
    {"_shadr_open_window_image_rcpp", (DL_FUNC) &_shadr_open_window_image_rcpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_shadr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
