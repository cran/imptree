// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "imptree_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// treebuilder_cpp
Rcpp::XPtr<Node> treebuilder_cpp(const Rcpp::IntegerMatrix& data, const Rcpp::List& config);
RcppExport SEXP _imptree_treebuilder_cpp(SEXP dataSEXP, SEXP configSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type config(configSEXP);
    rcpp_result_gen = Rcpp::wrap(treebuilder_cpp(data, config));
    return rcpp_result_gen;
END_RCPP
}
// hasRoot_cpp
bool hasRoot_cpp(Rcpp::XPtr<Node> prootnode);
RcppExport SEXP _imptree_hasRoot_cpp(SEXP prootnodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Node> >::type prootnode(prootnodeSEXP);
    rcpp_result_gen = Rcpp::wrap(hasRoot_cpp(prootnode));
    return rcpp_result_gen;
END_RCPP
}
// predict_cpp
Rcpp::List predict_cpp(Rcpp::XPtr<Node> prootnode, const Rcpp::IntegerMatrix& newdata, const Rcpp::List& evalconfig);
RcppExport SEXP _imptree_predict_cpp(SEXP prootnodeSEXP, SEXP newdataSEXP, SEXP evalconfigSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Node> >::type prootnode(prootnodeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type evalconfig(evalconfigSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_cpp(prootnode, newdata, evalconfig));
    return rcpp_result_gen;
END_RCPP
}
// treeInformation_cpp
Rcpp::IntegerVector treeInformation_cpp(Rcpp::XPtr<Node> prootnode);
RcppExport SEXP _imptree_treeInformation_cpp(SEXP prootnodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Node> >::type prootnode(prootnodeSEXP);
    rcpp_result_gen = Rcpp::wrap(treeInformation_cpp(prootnode));
    return rcpp_result_gen;
END_RCPP
}
// treePrint_cpp
void treePrint_cpp(Rcpp::XPtr<Node> prootnode, const int nsmall, const std::string& sep);
RcppExport SEXP _imptree_treePrint_cpp(SEXP prootnodeSEXP, SEXP nsmallSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Node> >::type prootnode(prootnodeSEXP);
    Rcpp::traits::input_parameter< const int >::type nsmall(nsmallSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type sep(sepSEXP);
    treePrint_cpp(prootnode, nsmall, sep);
    return R_NilValue;
END_RCPP
}
// getNode_cpp
Rcpp::List getNode_cpp(Rcpp::XPtr<Node> prootnode, Rcpp::IntegerVector idxs);
RcppExport SEXP _imptree_getNode_cpp(SEXP prootnodeSEXP, SEXP idxsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Node> >::type prootnode(prootnodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type idxs(idxsSEXP);
    rcpp_result_gen = Rcpp::wrap(getNode_cpp(prootnode, idxs));
    return rcpp_result_gen;
END_RCPP
}
// createProbIntInformation_cpp
Rcpp::List createProbIntInformation_cpp(const Rcpp::IntegerVector& vec, const Rcpp::List& config, const bool minentropy, const bool maxentropy);
RcppExport SEXP _imptree_createProbIntInformation_cpp(SEXP vecSEXP, SEXP configSEXP, SEXP minentropySEXP, SEXP maxentropySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type config(configSEXP);
    Rcpp::traits::input_parameter< const bool >::type minentropy(minentropySEXP);
    Rcpp::traits::input_parameter< const bool >::type maxentropy(maxentropySEXP);
    rcpp_result_gen = Rcpp::wrap(createProbIntInformation_cpp(vec, config, minentropy, maxentropy));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_imptree_treebuilder_cpp", (DL_FUNC) &_imptree_treebuilder_cpp, 2},
    {"_imptree_hasRoot_cpp", (DL_FUNC) &_imptree_hasRoot_cpp, 1},
    {"_imptree_predict_cpp", (DL_FUNC) &_imptree_predict_cpp, 3},
    {"_imptree_treeInformation_cpp", (DL_FUNC) &_imptree_treeInformation_cpp, 1},
    {"_imptree_treePrint_cpp", (DL_FUNC) &_imptree_treePrint_cpp, 3},
    {"_imptree_getNode_cpp", (DL_FUNC) &_imptree_getNode_cpp, 2},
    {"_imptree_createProbIntInformation_cpp", (DL_FUNC) &_imptree_createProbIntInformation_cpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_imptree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}