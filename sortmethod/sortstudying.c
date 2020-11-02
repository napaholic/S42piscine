/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstudying.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:57:18 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/02 16:01:36 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

public QuickSort {

    public static void quickSort(int[] arr) {
        quickSort(arr, 0, arr.length -1);
    }

    private static void quickSort(int[] arr, int begin, int end) {
        if (begin >= end) {
            return;
        }

        int middle = begin + (end - begin) / 2;
        int pivot = arr[middle];
        int left = begin;
        int right = end;

        while (left <= right) {
            while (arr[left] < pivot) {
                left++;
            }

            while (arr[right] > pivot) {
                right--;
            }

            if (left <= right) {
                arr[left] = arr[left] + arr[right];
                arr[right] = arr[left] - arr[right];
                arr[left] = arr[left] - arr[right];

                left++;
                right--;
            }
        }

        if (begin < right) {
            quickSort(arr, begin, right);
        }

        if (end > left) {
            quickSort(arr, left, end);
        }
    }
}
