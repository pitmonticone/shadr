# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

open_window_rcpp <- function(vertex_shader, fragment_shader, width, height, type) {
    .Call(`_shadr_open_window_rcpp`, vertex_shader, fragment_shader, width, height, type)
}

open_window_image_rcpp <- function(vertex_shader, fragment_shader, width, height, r_layer, g_layer, b_layer) {
    .Call(`_shadr_open_window_image_rcpp`, vertex_shader, fragment_shader, width, height, r_layer, g_layer, b_layer)
}

