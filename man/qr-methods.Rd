% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/qr.R
\name{qr.gpuMatrix}
\alias{qr.gpuMatrix}
\alias{qr.gpuR}
\alias{qr.vclMatrix}
\title{The QR Decomposition of a gpuR matrix}
\usage{
\method{qr}{gpuMatrix}(x, ..., inplace = FALSE)

\method{qr}{vclMatrix}(x, ..., inplace = FALSE)
}
\arguments{
\item{x}{A gpuR matrix}

\item{...}{further arguments passed to or from other methods}

\item{inplace}{Logical indicating if operations performed inplace}
}
\value{
A \code{list} containing the QR decomposition of the matrix of class
\code{gpuQR}.  The returned value is a list with the following components:
\itemize{
\item{qr} a matrix with the same dimensions as \code{x}.
\item{betas} vector of numeric values containing additional information of 
\code{qr} for extracting \code{Q} and \code{R} matrices.
}
}
\description{
\code{qr} computs the QR decomposition of a gpuR matrix
}
\note{
This an S3 generic of \link[base]{qr}.  The default continues
to point to the default base function.

Furthermore, the list returned does not contain the exact same elements
as \link[base]{qr}.  The matrix storage format applied herein doesn't match
the base compact form.  The method also doesn't return \code{qraux}, 
\code{rank}, or \code{pivot} but instead returns \code{betas}
}
\author{
Charles Determan Jr.
}
\seealso{
\link[base]{qr}
}

