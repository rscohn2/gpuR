% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/methods-vclMatrix.R
\docType{methods}
\name{crossprod,vclMatrix,missing-method}
\alias{crossprod,vclMatrix}
\alias{crossprod,vclMatrix,missing-method}
\alias{crossprod,vclMatrix,vclMatrix-method}
\alias{tcrossprod,vclMatrix,missing-method}
\alias{tcrossprod,vclMatrix,vclMatrix-method}
\title{vclMatrix Crossproduct}
\usage{
\S4method{crossprod}{vclMatrix,missing}(x, y)

\S4method{crossprod}{vclMatrix,vclMatrix}(x, y)

\S4method{tcrossprod}{vclMatrix,missing}(x, y)

\S4method{tcrossprod}{vclMatrix,vclMatrix}(x, y)
}
\arguments{
\item{x}{A vclMatrix}

\item{y}{A vclMatrix}
}
\value{
A vclMatrix
}
\description{
Return the matrix cross-product of two conformable
matrices using a GPU.  This is equivalent to t(x) %*% y (crossprod)
or x %*% t(t) (tcrossprod) but faster as no data transfer between
device and host is required.
}
\author{
Charles Determan Jr.
}

