% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/methods-vclVector.R, R/vclVector.R
\docType{methods}
\name{as.vclVector}
\alias{as.vclVector}
\alias{vclVector}
\alias{vclVector,missing}
\alias{vclVector,missing,ANY-method}
\alias{vclVector,vector}
\alias{vclVector,vector,missing-method}
\title{Construct a vclVector}
\usage{
as.vclVector(data, shared, ...)

vclVector(data, length, type = NULL, ...)

\S4method{vclVector}{vector,missing}(data, length, type = NULL,
  ctx_id = NULL)

\S4method{vclVector}{missing,ANY}(data, length, type = NULL, ctx_id = NULL)
}
\arguments{
\item{data}{An object that is or can be converted to a 
\code{vector}}

\item{shared}{Logical indicating if memory should be shared with \code{x}}

\item{...}{Additional method to pass to vclVector methods}

\item{length}{A non-negative integer specifying the desired length.}

\item{type}{A character string specifying the type of vclVector.  Default
is NULL where type is inherited from the source data type.}

\item{ctx_id}{An integer specifying the object's context}
}
\value{
A vclVector object
}
\description{
Construct a vclVector of a class that inherits
from \code{vclVector}.  This class points to memory directly on
the GPU to avoid the cost of data transfer between host and device.
}
\author{
Charles Determan Jr.
}

