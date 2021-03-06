% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/methods-gpuVector.R, R/methods-vclMatrix.R,
%   R/methods-vclVector.R, R/methods.R
\docType{methods}
\name{Summary,gpuVector-method}
\alias{Summary,gpuMatrix-method}
\alias{Summary,gpuVector-method}
\alias{Summary,vclMatrix-method}
\alias{Summary,vclVector-method}
\alias{Summary-gpuR-method}
\title{gpuR Summary methods}
\usage{
\S4method{Summary}{gpuVector}(x, ..., na.rm = FALSE)

\S4method{Summary}{vclMatrix}(x, ..., na.rm = FALSE)

\S4method{Summary}{vclVector}(x, ..., na.rm = FALSE)

\S4method{Summary}{gpuMatrix}(x, ..., na.rm = FALSE)
}
\arguments{
\item{x}{A gpuR object}

\item{...}{Additional arguments passed to method (not currently used)}

\item{na.rm}{a logical indicating whether missing values should be removed (
not currently used)}
}
\value{
For \code{min} or \code{max}, a length-one vector
}
\description{
Methods for the base Summary methods \link[methods]{S4groupGeneric}
}

