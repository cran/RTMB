% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/00roxygen.R, R/osa.R
\name{OSA-residuals}
\alias{OSA-residuals}
\alias{oneStepPredict}
\alias{[.osa}
\alias{length.osa}
\alias{dim.osa}
\alias{is.array.osa}
\alias{is.matrix.osa}
\title{Recursive quantile residuals}
\usage{
oneStepPredict(
  obj,
  observation.name = names(obj$env$obs)[1],
  data.term.indicator = "_RTMB_keep_",
  ...
)

\method{[}{osa}(x, ...)

\method{length}{osa}(x)

\method{dim}{osa}(x)

\method{is.array}{osa}(x)

\method{is.matrix}{osa}(x)
}
\arguments{
\item{obj}{TMB model object (output from \code{MakeADFun})}

\item{observation.name}{Auto detected - use the default}

\item{data.term.indicator}{Auto detected - use the default}

\item{...}{Passed to \code{TMB::}\link[TMB]{oneStepPredict} - \bold{please carefully read the documentation}, especially the \code{method} argument.}

\item{x}{Object of class 'osa'}
}
\value{
\code{data.frame} with standardized residuals; Same as \link[TMB]{oneStepPredict}.
}
\description{
OSA residuals are computed using the function
\code{oneStepPredict}. For this to work, you need to mark the
observation inside the objective function using the \link{OBS}
function. Thereafter, residual calculation is as simple as
\code{oneStepPredict(obj)}. However, you probably want specify a
\code{method} to use.
}
\section{Functions}{
\itemize{
\item \code{oneStepPredict()}: Calculate the residuals. See documentation of \code{TMB::}\link[TMB]{oneStepPredict}.

\item \code{[}: Subset observations marked for OSA calculation.
This function makes sure that when you subset an observation of class \code{"osa"} such as
\code{obs <- new("osa", x=advector(matrix(1:10,2)), keep = cbind(rep(TRUE,10),FALSE,FALSE))}
the 'keep' attribute will be adjusted accordingly
\code{obs[,1:2]}

\item \code{length(osa)}: Equivalent of \link[base]{length}

\item \code{dim(osa)}: Equivalent of \link[base]{dim}

\item \code{is.array(osa)}: Equivalent of \link[base]{is.array}

\item \code{is.matrix(osa)}: Equivalent of \link[base]{is.matrix}

}}
\examples{
set.seed(1)
rw <- cumsum(.5*rnorm(20))
obs <- rpois(20, lambda=exp(rw))
func <- function(p) {
  obs <- OBS(obs) ## Mark 'obs' for OSA calculation on request
  ans <- 0
  jump <- c(p$rw[1], diff(p$rw))
  ans <- ans - sum(dnorm(jump, sd=p$sd, log=TRUE))
  ans <- ans - sum(dpois(obs, lambda=exp(p$rw), log=TRUE))
  ans
}
obj <- MakeADFun(func,
                 parameters=list(rw=rep(0,20), sd=1),
                 random="rw")
nlminb(obj$par, obj$fn, obj$gr)
res <- oneStepPredict(obj,
                      method="oneStepGeneric",
                      discrete=TRUE,
                      range=c(0,Inf))$residual
}
