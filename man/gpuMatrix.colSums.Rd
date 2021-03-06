% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/methods.R
\docType{methods}
\name{colSums,gpuMatrix,missing,missing-method}
\alias{colMeans,gpuMatrix,missing,missing-method}
\alias{colSums,gpuMatrix}
\alias{colSums,gpuMatrix,missing,missing-method}
\alias{rowMeans,gpuMatrix,missing,missing-method}
\alias{rowSums,gpuMatrix,missing,missing-method}
\title{Row and Column Sums and Means of gpuMatrix}
\usage{
\S4method{colSums}{gpuMatrix,missing,missing}(x, na.rm, dims)

\S4method{rowSums}{gpuMatrix,missing,missing}(x, na.rm, dims)

\S4method{colMeans}{gpuMatrix,missing,missing}(x, na.rm, dims)

\S4method{rowMeans}{gpuMatrix,missing,missing}(x, na.rm, dims)
}
\arguments{
\item{x}{A gpuMatrix object}

\item{na.rm}{Not currently used}

\item{dims}{Not currently used}
}
\value{
A gpuVector object
}
\description{
Row and column sums and of gpuMatrix objects
}
\author{
Charles Determan Jr.
}

