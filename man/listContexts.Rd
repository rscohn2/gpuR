% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{listContexts}
\alias{listContexts}
\title{Available OpenCL Contexts}
\usage{
listContexts()
}
\value{
data.frame containing the following fields

\item{context}{Integer identifying context}

\item{platform}{Character string listing OpenCL platform}

\item{platform_index}{Integer identifying platform}

\item{device}{Character string listing device name}

\item{device_index}{Integer identifying device}

\item{device_type}{Character string labeling device (e.g. gpu)}
}
\description{
Provide a data.frame of available OpenCL contexts and
associated information.
}

