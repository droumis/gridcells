#ifndef FIELDS_HPP
#define FIELDS_HPP

#include <armadillo>

#include "gridsCore.hpp"
#include "arena.hpp"

namespace grids
{


/**
 * Compute a spatial firing rate of a neuron.
 *
 * @param spikeTimes A vector of spike times of the neuron. Units must be the
 *                   same as for pos.dt.
 * @param pos Positional data, i.e. where the subject was located at which
 *            time.
 * @param xedges Discretisation of the arena (X).
 * @param yedges Discretisation of the arena (Y).
 * @param sigma  Smoothing factor (i.e. std. dev. of the smoothing Gaussian
 *               function).
 * @returns A 2D array containing the firing rate in time units specified by
 *          the user data.
 */
arma::mat*
spatialRateMap(const arma::vec& spikeTimes,
               const Position2D& pos,
               const Arena& arena,
               double sigma);


} // namespace grids

#endif // FIELDS_HPP
